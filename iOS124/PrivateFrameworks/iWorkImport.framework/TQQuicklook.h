//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDocumentResourceFileURLProvider-Protocol.h>

@class NSBundle, NSString, TSABaseApplicationDelegate, TSACirrusDocument, TSUTemporaryDirectory;
@protocol TSKRenderingExporter;

__attribute__((visibility("hidden")))
@interface TQQuicklook : NSObject <TSPDocumentResourceFileURLProvider>
{
    NSString *mPath;
    TSACirrusDocument *mDocument;
    TSABaseApplicationDelegate *mBaseAppDelegate;
    TSUTemporaryDirectory *mTemporaryDirectory;
    NSString *mPassphrase;
    id <TSKRenderingExporter> mExporter;
    NSBundle *mInstalledGingerBundle;
    NSBundle *mInstalledSageBundle;
}

+ (void)unloadAssetColorMap;
+ (void)loadAssetColorMap;
+ (id)tsuColorFromColorArray:(id)arg1;
- (id)sheetNameForPageNumber:(unsigned long long)arg1 isForm:(_Bool *)arg2;
- (id)newPDFForPageNumber:(unsigned long long)arg1;
- (id)newPDFPreviewAndClose;
- (id)thumbnail;
- (unsigned long long)pageCount;
- (void)close;
- (struct __CFString *)getIdentifierForApp:(id)arg1;
- (_Bool)load;
- (void)dealloc;
- (id)initWithPath:(id)arg1 passphrase:(id)arg2;
- (id)fileURLForDocumentResourceInfo:(id)arg1;
- (_Bool)writePreviewToOutput:(id)arg1 pageNumber:(unsigned long long)arg2;
- (Class)appDelegateClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

