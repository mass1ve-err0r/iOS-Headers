//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, TSKDocumentRoot, TSUImage, TSUProgress, TSUProgressContext;
@protocol TSDImportExportDelegate;

@protocol TSKExporter <NSObject>
@property(readonly, nonatomic) _Bool isCancelled;
- (void)setProgressContext:(TSUProgressContext *)arg1;
- (TSUProgressContext *)progressContext;
- (void)quit;
- (void)cancel;
- (_Bool)exportToURL:(NSURL *)arg1 delegate:(id <TSDImportExportDelegate>)arg2 error:(id *)arg3;
- (id)initWithDocumentRoot:(TSKDocumentRoot *)arg1;

@optional
@property(readonly, nonatomic) _Bool canExportInBackground;
@property(readonly, nonatomic) _Bool isExportSupported;
@property(readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property(readonly, nonatomic) NSString *savePanelMessage;
@property(copy, nonatomic) NSString *typeUTI;
@property(readonly, nonatomic) _Bool needsSupplementalFiles;
@property(readonly, nonatomic) TSUProgress *progress;
- (void)setReturnCode:(int *)arg1;
- (void)enableRenderAllContent;
- (void)setOptions:(NSDictionary *)arg1;
- (void)setSaveToURL:(NSURL *)arg1;
- (NSURL *)exportURLForOutputURL:(NSURL *)arg1;
- (void)setUsePackageFormat:(_Bool)arg1;
- (void)setQuickLookThumbnail:(TSUImage *)arg1;
- (void)setBuildVersionHistory:(NSArray *)arg1;
@end

