//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, UIBezierPath, UIColor, UIDragPreviewParameters;

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _springboardPlatterStyle;
    _Bool _fadesHorizontally;
    _Bool _fadesVertically;
    _Bool _hidesSourceView;
    _Bool _textMode;
    NSDictionary *_springboardParameters;
    UIColor *_backgroundColor;
    UIBezierPath *_outline;
    double _originalRotation;
    struct CGPoint _contentOffset;
    struct CGSize _contentSize;
    struct CGPoint _originalCenter;
    struct CGPoint _liftAnchorPoint;
    struct CGSize _viewScaleFactor;
}

+ (double)defaultStackAlpha;
+ (id)defaultPreviewWithFrame:(struct CGRect)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct CGSize viewScaleFactor; // @synthesize viewScaleFactor=_viewScaleFactor;
@property(nonatomic) struct CGPoint liftAnchorPoint; // @synthesize liftAnchorPoint=_liftAnchorPoint;
@property(nonatomic) _Bool textMode; // @synthesize textMode=_textMode;
@property(nonatomic) double originalRotation; // @synthesize originalRotation=_originalRotation;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(copy, nonatomic) UIBezierPath *outline; // @synthesize outline=_outline;
@property(nonatomic) _Bool hidesSourceView; // @synthesize hidesSourceView=_hidesSourceView;
@property(nonatomic) _Bool fadesVertically; // @synthesize fadesVertically=_fadesVertically;
@property(nonatomic) _Bool fadesHorizontally; // @synthesize fadesHorizontally=_fadesHorizontally;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSDictionary *_springboardParameters; // @synthesize _springboardParameters;
@property(nonatomic) _Bool _springboardPlatterStyle; // @synthesize _springboardPlatterStyle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) struct CGSize croppedScaledSize;
@property(readonly, nonatomic) struct CGPoint croppedScaledAnchorPoint;
- (double)_topOffset;
@property(readonly, nonatomic) struct CGSize unscaledSize;
@property(readonly, nonatomic) struct CGPoint unscaledAnchorPoint;
@property(readonly, nonatomic) double topAlpha;
@property(readonly, nonatomic) double stackAlpha;
@property(readonly, nonatomic) double scaleFactor;
@property(readonly, nonatomic) struct CGSize scaledSize;
@property(readonly, nonatomic, getter=isOversized) _Bool oversized;
@property(readonly, nonatomic) struct CGAffineTransform liftTransform;
@property(readonly, nonatomic) double liftAlpha;
@property(readonly, nonatomic) struct CGSize boundingSize;
@property(readonly, nonatomic) double backAlpha;
@property(readonly, nonatomic) UIDragPreviewParameters *parameters;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3 center:(struct CGPoint)arg4;
- (id)initWithView:(id)arg1 container:(id)arg2 parameters:(id)arg3;
- (id)initWithBounds:(struct CGRect)arg1 outline:(id)arg2;
- (id)init;

@end

