//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CAReplicatorLayer : CALayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
@property float instanceAlphaOffset;
@property float instanceBlueOffset;
@property float instanceGreenOffset;
@property float instanceRedOffset;
@property struct CGColor *instanceColor;
@property struct CATransform3D instanceTransform;
@property double instanceDelay;
@property _Bool preservesDepth;
@property long long instanceCount;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;

@end

