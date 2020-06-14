//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CGRenderer.h>

__attribute__((visibility("hidden")))
@interface PDFRenderer : CGRenderer
{
    struct __CFDictionary *info;
    struct __CFData *data;
    struct CGDataConsumer *dataConsumer;
}

- (const struct __CFData *)pdfdata;
- (void)flushRender;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileTitle:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

