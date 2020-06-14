//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSSet, NSString;
@protocol FCContentContext;

@interface FCGreatStoriesYouMissedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    id <FCContentContext> _context;
    unsigned long long _limit;
}

+ (_Bool)greatStoriesMayEmit:(id)arg1;
+ (void)setShouldEmitOverride:(_Bool)arg1;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly, nonatomic) _Bool emitsSingletonGroups;
@property(readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (_Bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool emitsSingleRefreshSessionGroups;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRequiredByFollowingEmitters;
@property(readonly, nonatomic) _Bool requiresHeavyweightContent;
@property(readonly) Class superclass;

@end

