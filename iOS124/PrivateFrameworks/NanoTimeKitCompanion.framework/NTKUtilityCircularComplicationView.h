//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

#import <NanoTimeKitCompanion/NTKContainerViewLayoutDelegate-Protocol.h>

@class NSString, NTKContainerView;

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate>
{
    NTKContainerView *_contentView;
}

@property(readonly, nonatomic) NTKContainerView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (long long)layoutOverride;
- (void)_updateEditingRotationAngle;
- (void)setEditingRotationAngle:(double)arg1;
- (void)setEditing:(_Bool)arg1;
- (void)_layoutContentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutContainerView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

