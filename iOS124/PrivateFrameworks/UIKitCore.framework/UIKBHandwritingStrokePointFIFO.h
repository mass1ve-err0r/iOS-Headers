//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO
{
    TIHandwritingStrokes *_strokes;
}

@property(retain, nonatomic) TIHandwritingStrokes *strokes; // @synthesize strokes=_strokes;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (id)initWithFIFO:(id)arg1;

@end

