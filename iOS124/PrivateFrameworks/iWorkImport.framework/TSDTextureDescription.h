//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@protocol TSDAnimationSession;

__attribute__((visibility("hidden")))
@interface TSDTextureDescription : NSObject <NSCopying>
{
    unsigned int _isMagicMove:1;
    unsigned int _includesActionBuilds:1;
    unsigned int _shouldAddFinal:1;
    unsigned int _shouldAddMasks:1;
    unsigned int _shouldAddMagicMoveObjectOnly:1;
    unsigned int _shouldNotAddContainedReps:1;
    unsigned int _shouldNotAddShapeAttributes:1;
    unsigned int _shouldNotAddText:1;
    unsigned int _shouldSeparateReflection:1;
    unsigned int _shouldSeparateShadow:1;
    unsigned int _shouldSeparateStroke:1;
    unsigned int _shouldAddParameterizedStroke:1;
    unsigned int _shouldReverseStrokeDrawing:1;
    unsigned int _shouldSeparateGroupedTextures:1;
    unsigned int _shouldSeparateText:1;
    unsigned int _shouldIgnoreScaleInSourceImage:1;
    unsigned int _shouldDistortToFit:1;
    unsigned int _shouldForceTextureGeneration:1;
    _Bool _shouldAddNoShapeAttributes;
    int _byGlyphStyle;
    id <TSDAnimationSession> _session;
    unsigned long long _stage;
    unsigned long long _deliveryStyle;
}

+ (id)descriptionWithTextureDescription:(id)arg1;
+ (id)descriptionWithSession:(id)arg1;
@property(nonatomic) int byGlyphStyle; // @synthesize byGlyphStyle=_byGlyphStyle;
@property(nonatomic) unsigned long long deliveryStyle; // @synthesize deliveryStyle=_deliveryStyle;
@property(nonatomic) unsigned long long stage; // @synthesize stage=_stage;
@property(nonatomic) _Bool shouldIgnoreScaleInSourceImage; // @synthesize shouldIgnoreScaleInSourceImage=_shouldIgnoreScaleInSourceImage;
@property(nonatomic) _Bool shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration;
@property(nonatomic) _Bool shouldSeparateText; // @synthesize shouldSeparateText=_shouldSeparateText;
@property(nonatomic) _Bool shouldSeparateGroupedTextures; // @synthesize shouldSeparateGroupedTextures=_shouldSeparateGroupedTextures;
@property(nonatomic) _Bool shouldReverseStrokeDrawing; // @synthesize shouldReverseStrokeDrawing=_shouldReverseStrokeDrawing;
@property(nonatomic) _Bool shouldAddParameterizedStroke; // @synthesize shouldAddParameterizedStroke=_shouldAddParameterizedStroke;
@property(nonatomic) _Bool shouldSeparateStroke; // @synthesize shouldSeparateStroke=_shouldSeparateStroke;
@property(nonatomic) _Bool shouldSeparateShadow; // @synthesize shouldSeparateShadow=_shouldSeparateShadow;
@property(nonatomic) _Bool shouldSeparateReflection; // @synthesize shouldSeparateReflection=_shouldSeparateReflection;
@property(nonatomic) _Bool shouldNotAddText; // @synthesize shouldNotAddText=_shouldNotAddText;
@property(nonatomic) _Bool shouldNotAddShapeAttributes; // @synthesize shouldNotAddShapeAttributes=_shouldAddNoShapeAttributes;
@property(nonatomic) _Bool shouldNotAddContainedReps; // @synthesize shouldNotAddContainedReps=_shouldNotAddContainedReps;
@property(nonatomic) _Bool shouldDistortToFit; // @synthesize shouldDistortToFit=_shouldDistortToFit;
@property(nonatomic) _Bool shouldAddMasks; // @synthesize shouldAddMasks=_shouldAddMasks;
@property(nonatomic) _Bool shouldAddMagicMoveObjectOnly; // @synthesize shouldAddMagicMoveObjectOnly=_shouldAddMagicMoveObjectOnly;
@property(nonatomic) _Bool shouldAddFinal; // @synthesize shouldAddFinal=_shouldAddFinal;
@property(nonatomic) _Bool includesActionBuilds; // @synthesize includesActionBuilds=_includesActionBuilds;
@property(nonatomic) _Bool isMagicMove; // @synthesize isMagicMove=_isMagicMove;
@property(nonatomic) __weak id <TSDAnimationSession> session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
