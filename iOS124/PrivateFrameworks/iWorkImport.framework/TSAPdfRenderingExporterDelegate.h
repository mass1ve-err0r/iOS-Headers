//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSARenderingExporterDelegate-Protocol.h>

@class NSString, TSARenderingExporter;

__attribute__((visibility("hidden")))
@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate>
{
    TSARenderingExporter *mRenderingExporter;
    NSString *mPassphraseOpen;
    NSString *mPassphrasePrintCopy;
    _Bool mRequireOpenPassword;
    _Bool mRequireCopyPassword;
    _Bool mRequirePrintPassword;
    int mRenderingQuality;
}

- (void).cxx_destruct;
- (_Bool)validatePassphrases:(id *)arg1;
- (_Bool)supportsRenderingQuality;
- (_Bool)supportsPaging;
- (void)releaseCGContext:(struct CGContext *)arg1;
- (struct CGContext *)newCGContextForURL:(id)arg1;
- (double)viewScale;
- (void)teardown;
- (void)setup;
- (int)renderingQuality;
- (void)setRenderingQuality:(int)arg1;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)initWithRenderingExporter:(id)arg1;

@end

