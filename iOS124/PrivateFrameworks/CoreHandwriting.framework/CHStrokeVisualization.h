//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHVisualization.h>

@protocol CHStrokeProvider;

@interface CHStrokeVisualization : CHVisualization
{
    id <CHStrokeProvider> __strokeProviderDrawn;
}

@property(retain, nonatomic) id <CHStrokeProvider> _strokeProviderDrawn; // @synthesize _strokeProviderDrawn=__strokeProviderDrawn;
- (void)drawStrokesFromStrokeProvider:(id)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (void)dealloc;

@end

