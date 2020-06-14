//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRotatableAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKStrokedAnnotationProtocol-Protocol.h>

@class NSString, UIBezierPath, UIColor;

@interface AKDoodleAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol, AKStrokedAnnotationProtocol>
{
    _Bool _dashed;
    _Bool _hasShadow;
    _Bool _pathIsPrestroked;
    _Bool _pathIsDot;
    double _rotationAngle;
    double _strokeWidth;
    UIColor *_strokeColor;
    long long _brushStyle;
    UIBezierPath *_path;
    struct CGRect _rectangle;
}

+ (_Bool)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property _Bool pathIsDot; // @synthesize pathIsDot=_pathIsDot;
@property _Bool pathIsPrestroked; // @synthesize pathIsPrestroked=_pathIsPrestroked;
@property(retain) UIBezierPath *path; // @synthesize path=_path;
@property _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(getter=brushStyle) long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property(getter=isDashed) _Bool dashed; // @synthesize dashed=_dashed;
@property(retain) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(struct CGSize)arg2;
- (void)adjustModelToCompensateForOriginalExif;
- (struct CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

