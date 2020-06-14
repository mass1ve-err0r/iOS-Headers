//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DExternalLabelAttribute, TSCH3DLabelsRenderer;

__attribute__((visibility("hidden")))
@interface TSCH3DLabelsMeshRendererLabelInfo : NSObject
{
    float _rotation;
    TSCH3DLabelsRenderer *_renderer;
    tvec2_84d5962d _offset;
    tvec2_84d5962d _alignmentOffset;
    TSCH3DExternalLabelAttribute *_externalAttribute;
    tvec3_17f03ce0 _position;
    tvec3_17f03ce0 _translation;
    tvec3_17f03ce0 _scale;
}

@property(readonly, retain, nonatomic) TSCH3DExternalLabelAttribute *externalAttribute; // @synthesize externalAttribute=_externalAttribute;
@property(readonly, nonatomic) tvec2_84d5962d alignmentOffset; // @synthesize alignmentOffset=_alignmentOffset;
@property(readonly, nonatomic) tvec2_84d5962d offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) tvec3_17f03ce0 scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) tvec3_17f03ce0 translation; // @synthesize translation=_translation;
@property(readonly, nonatomic) tvec3_17f03ce0 position; // @synthesize position=_position;
@property(readonly, nonatomic) TSCH3DLabelsRenderer *renderer; // @synthesize renderer=_renderer;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 position:(tvec3_17f03ce0)arg2 translation:(tvec3_17f03ce0)arg3 scale:(tvec3_17f03ce0)arg4 rotation:(float)arg5 offset:(tvec2_84d5962d)arg6 alignmentOffset:(tvec2_84d5962d)arg7 externalAttribute:(id)arg8;

@end

