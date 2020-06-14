//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSAPdfHyperlinkController : NSObject
{
    NSMutableArray *mHyperlinks;
    NSMutableArray *mDestinations;
}

- (void).cxx_destruct;
- (void)p_commitDestinationToPDF:(id)arg1 cgrect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)p_commitUrlToPDF:(id)arg1 cgrect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)p_combineSimilarElements:(id)arg1;
- (id)p_chopBezierIntoRects:(id)arg1;
- (id)p_splitIntoSubshapes:(id)arg1;
- (id)p_hyperlinkRegionsForRep:(id)arg1 context:(struct CGContext *)arg2;
- (void)commitHyperlinksToPDF:(struct CGContext *)arg1 targetRect:(struct CGRect)arg2;
- (void)addHyperlinksForContents:(id)arg1 context:(struct CGContext *)arg2;
- (void)addHyperlinksForRep:(id)arg1 context:(struct CGContext *)arg2;
- (void)addHyperlinkForRect:(struct CGRect)arg1 withUrl:(id)arg2 context:(struct CGContext *)arg3;
- (struct CGRect)canvasRect;
- (id)destinationFromUrl:(id)arg1;
- (_Bool)isDestination:(id)arg1;
- (_Bool)ignoreUrl:(id)arg1;
- (id)init;

@end

