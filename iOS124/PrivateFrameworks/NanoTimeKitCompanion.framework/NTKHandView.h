//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringImageView.h>

@class CLKDevice, UIColor, UIImage, UIImageView;

@interface NTKHandView : NTKColoringImageView
{
    CLKDevice *_device;
    UIImageView *_shadowImageView;
    NTKColoringImageView *_inlayView;
    _Bool _shadowsHidden;
    double _zRotation;
    double _scale;
    UIColor *_inlayColor;
    UIImage *_shadowImage;
    struct UIEdgeInsets _inlayInsets;
    struct UIEdgeInsets _shadowInsets;
}

+ (id)_resizableInlayImageForDevice:(id)arg1;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) struct UIEdgeInsets shadowInsets; // @synthesize shadowInsets=_shadowInsets;
@property(nonatomic) _Bool shadowsHidden; // @synthesize shadowsHidden=_shadowsHidden;
@property(nonatomic) struct UIEdgeInsets inlayInsets; // @synthesize inlayInsets=_inlayInsets;
@property(retain, nonatomic) UIColor *inlayColor; // @synthesize inlayColor=_inlayColor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double zRotation; // @synthesize zRotation=_zRotation;
- (void).cxx_destruct;
- (void)_updateShadows;
@property(readonly, nonatomic) NTKColoringImageView *inlayView;
- (void)_updateTransform;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1 forDevice:(id)arg2;

@end

