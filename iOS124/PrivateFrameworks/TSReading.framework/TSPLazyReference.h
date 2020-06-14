//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class TSPComponent, TSPObject;
@protocol TSPLazyReferenceDelegate;

@interface TSPLazyReference : NSObject <NSCopying>
{
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    _Bool _isWeak;
    _Bool _allowUnknownObject;
    id <TSPLazyReferenceDelegate> _delegate;
    long long _identifier;
    TSPComponent *_component;
}

+ (id)referenceForObject:(id)arg1;
@property(nonatomic) _Bool isWeak; // @synthesize isWeak=_isWeak;
@property(nonatomic) __weak TSPComponent *component; // @synthesize component=_component;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <TSPLazyReferenceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)resetIdentifier;
- (_Bool)discardStrongObjectIfPossible;
@property(retain, nonatomic) TSPObject *strongObject;
@property(readonly, nonatomic) TSPObject *weakObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)referencesObject:(id)arg1;
- (_Bool)isEqualToLazyReference:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) id objectIfLoaded;
@property(readonly, nonatomic) id object;
- (id)initWithTSPObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4;
- (id)init;

@end

