//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIRenditionKey, NSArray;

@interface CUIThemeSchemaRenditionGroup : NSObject
{
    CUIRenditionKey *_baseKey;
    NSArray *_renditions;
    CDStruct_26b2aa83 *_part;
}

+ (id)renditionGroupsForRenditions:(id)arg1 part:(CDStruct_26b2aa83 *)arg2;
@property(retain, nonatomic) NSArray *renditions; // @synthesize renditions=_renditions;
- (void)dealloc;
- (long long)partFeatures;
- (void)addValueOrDim1LayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2 state:(unsigned long long)arg3 drawingLayer:(unsigned long long)arg4;
- (void)addStatesAndDrawingLayersToPSDLayers:(id)arg1 forPresentationState:(unsigned long long)arg2;
- (id)schemaLayersAndLayerGroups;
- (id)themeSchemaLayers;
- (id)_layerNameForDrawingLayer:(long long)arg1;
- (id)_layerNameForState:(long long)arg1;
- (id)_renditionsSortedIntoLayers;
- (id)description;
- (id)mutablePSDImageRefColumnStyle;
- (id)mutablePSDImageRef;
- (void)addLayoutMetricsToPSDImageRef:(id)arg1 withRendition:(id)arg2;
- (id)baseKey;
- (id)initWithRenditions:(id)arg1 part:(CDStruct_26b2aa83 *)arg2;

@end

