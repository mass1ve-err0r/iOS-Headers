//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

@interface OADDrawable : NSObject
{
    _Bool mHidden;
    unsigned int mId;
    unsigned int mAltId;
    OADDrawableProperties *mDrawableProperties;
    id <OADClient> mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}

+ (unsigned int)generateOADDrawableId:(id)arg1;
- (id)description;
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;
- (void)removeUnnecessaryOverrides;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)ensureClientDataOfClass:(Class)arg1;
- (id)clientData;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (id)drawableProperties;
- (void)setAltId:(unsigned int)arg1;
- (unsigned int)altId;
- (void)setId:(unsigned int)arg1;
- (unsigned int)id;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (void)dealloc;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)createWordClientDataWithTextType:(int)arg1;

@end

