//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TNRenderingExporter.h>

#import <iWorkImport/TSKEncryptedDocumentExporter-Protocol.h>

@class NSDictionary, NSString, TSUProgress;

__attribute__((visibility("hidden")))
@interface TNPdfExporter : TNRenderingExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary *mOptions;
}

- (void).cxx_destruct;
- (void)setOptions:(id)arg1;
- (_Bool)validatePassphrases:(id *)arg1;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)p_renderingExporterDelegate;

// Remaining properties
@property(readonly, nonatomic) _Bool canExportInBackground;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly, nonatomic) _Bool isExportSupported;
@property(readonly, nonatomic) _Bool needsSupplementalFiles;
@property(readonly, nonatomic) TSUProgress *progress;
@property(readonly, nonatomic) NSString *savePanelMessage;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *typeUTI;

@end

