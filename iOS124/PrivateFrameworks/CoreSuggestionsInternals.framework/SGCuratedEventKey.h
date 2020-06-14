//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGCuratedEventKey : NSObject <SGEntityKey>
{
    NSString *_externalId;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCuratedEventKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithExternalId:(id)arg1;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

