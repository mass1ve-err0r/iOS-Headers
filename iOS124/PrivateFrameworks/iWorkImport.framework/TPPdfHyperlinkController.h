//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSAPdfHyperlinkController.h>

__attribute__((visibility("hidden")))
@interface TPPdfHyperlinkController : TSAPdfHyperlinkController
{
    struct CGRect mCanvasRect;
}

+ (id)URLWithDestinationName:(id)arg1;
+ (id)footnoteMarkNameForIndex:(unsigned long long)arg1;
+ (id)footnoteRefNameForIndex:(unsigned long long)arg1;
- (id)destinationFromUrl:(id)arg1;
- (_Bool)isDestination:(id)arg1;
- (_Bool)ignoreUrl:(id)arg1;
- (void)setCanvasRect:(struct CGRect)arg1;
- (struct CGRect)canvasRect;
- (id)initWithDocumentRoot:(id)arg1;

@end

