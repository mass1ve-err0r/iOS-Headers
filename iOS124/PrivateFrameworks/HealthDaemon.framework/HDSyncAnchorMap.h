//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncAnchorMap-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_anchorsByEntityIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)anchorMapWithAnchorMap:(id)arg1;
+ (id)syncAnchorMapWithSyncAnchorRangeMap:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *anchorsByEntityIdentifier; // @synthesize anchorsByEntityIdentifier=_anchorsByEntityIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isAllZero;
- (unsigned long long)anchorCount;
- (void)setAnchorsFromMap:(id)arg1;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (long long)anchorForSyncEntityIdentifier:(id)arg1;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntityIdentifier:(id)arg2;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

