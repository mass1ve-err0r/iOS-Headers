//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/_NTKKeylineImageView.h>

#import <NanoTimeKitCompanion/NTKKeylineView-Protocol.h>

@class NSString, NTKKeylineTouchable, UIColor, UIView;
@protocol NTKKeylineView;

@interface _NTKCompoundKeylineImageView : _NTKKeylineImageView <NTKKeylineView>
{
    UIView<NTKKeylineView> *_secondaryKeylineView;
}

+ (id)keylineWithImage:(id)arg1 secondaryKeylineView:(id)arg2;
@property(retain, nonatomic) UIView<NTKKeylineView> *secondaryKeylineView; // @synthesize secondaryKeylineView=_secondaryKeylineView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *overrideColor;
@property(nonatomic) _Bool usesLegibility;
@property(retain, nonatomic) UIColor *color;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NTKKeylineTouchable *touchable;

@end

