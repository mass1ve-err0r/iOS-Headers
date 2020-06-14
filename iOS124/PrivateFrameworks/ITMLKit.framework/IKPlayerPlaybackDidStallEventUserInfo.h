//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSString;

@interface IKPlayerPlaybackDidStallEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    double _elapsedTime;
}

@property(readonly, nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)initWithElapsedTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

