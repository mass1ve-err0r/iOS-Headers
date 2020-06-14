//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnreadOnly : NSObject <FCFeedTransforming>
{
    FCReadingHistory *_history;
}

+ (id)transformationWithReadingHistory:(id)arg1;
@property(retain, nonatomic) FCReadingHistory *history; // @synthesize history=_history;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

