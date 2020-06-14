//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImage;

@interface _UIFloatingShadowView : UIView
{
    UIView *_shadowView;
    struct CATransform3D _shadowTransform;
    _Bool _shadowEnabled;
    _Bool __disableOutsetShadowPath;
    double _shadowRadius;
    double _shadowOpacity;
    double _shadowVerticalOffset;
    double _shadowExpansion;
    UIImage *_shadowImage;
    double _cornerRadius;
    struct CGSize _shadowSize;
    struct CGRect _shadowContentsCenter;
}

+ (Class)layerClass;
@property(nonatomic) _Bool _disableOutsetShadowPath; // @synthesize _disableOutsetShadowPath=__disableOutsetShadowPath;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect shadowContentsCenter; // @synthesize shadowContentsCenter=_shadowContentsCenter;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) double shadowExpansion; // @synthesize shadowExpansion=_shadowExpansion;
@property(nonatomic) double shadowVerticalOffset; // @synthesize shadowVerticalOffset=_shadowVerticalOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled; // @synthesize shadowEnabled=_shadowEnabled;
- (void).cxx_destruct;
- (struct CGPath *)_shadowPathForSize:(struct CGSize)arg1 radius:(double)arg2;
- (void)_setShadowImageIfNeeded;
- (void)_updateShadowLayer;
- (void)_layoutShadow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

