//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DDataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor
{
    TSCH3DDataBuffer *mBuffer;
}

+ (id)processorWithOriginal:(id)arg1;
@property(readonly, nonatomic) TSCH3DDataBuffer *buffer; // @synthesize buffer=mBuffer;
- (void)setOriginal:(id)arg1;
- (id)matrix;
- (void)geometry:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOriginal:(id)arg1;

@end

