//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUIPSDLayerEffectComponent : NSObject
{
    _Bool _visible;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property _Bool visible; // @synthesize visible=_visible;
- (void)dealloc;
- (unsigned int)effectType;
- (id)_colorFromShapeEffectValue:(CDUnion_577fdfa6)arg1;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

