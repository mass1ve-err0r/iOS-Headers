//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQWrapPointGenerator-Protocol.h>

@class GQDRoot, GQDSStylesheet, GQPProcessor, GQSTable, NSString, SFUZipArchive;
@protocol GQUOutputBundle, GQWrapPointGenerator;

__attribute__((visibility("hidden")))
@interface GQSDocument : NSObject <GQWrapPointGenerator>
{
    GQPProcessor *mProcessor;
    GQDRoot *mRoot;
    struct __CFURL *mBundleUrl;
    SFUZipArchive *mArchive;
    id <GQUOutputBundle> mOutputBundle;
    struct __CFArray *mObjectStack;
    id mGeneratorState;
    GQSTable *mTableState;
    Class mCurrentDrawablesGenerator;
    Class mCurrentTableGenerator;
    id <GQWrapPointGenerator> mCurrentWrapPointGenerator;
    _Bool mMustRegisterDrawables;
    _Bool mGeneratorBeginWasCalled;
    _Bool mShouldStreamTables;
    _Bool mDoExternalTextWrap;
    _Bool mGeneratingThumbnail;
    _Bool mThumbnailGenerationDone;
    unsigned int mTextScale;
    set_3d57cb01 *mWrapPoints;
    struct __CFDictionary *mBundleResourceUriMap;
    GQDSStylesheet *mStylesheet;
    _Bool mIsReadingStorageAttachments;
    struct __CFString *mFilename;
    struct __CFURL *mDocumentUrl;
    _Bool _doCalculateThumbnailSize;
}

@property(nonatomic) _Bool doCalculateThumbnailSize; // @synthesize doCalculateThumbnailSize=_doCalculateThumbnailSize;
- (struct __CFString *)filename;
- (_Bool)isReadingStorageAttachments;
- (void)setIsReadingStorageAttachments:(_Bool)arg1;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)setCurrentWrapPointGenerator:(id)arg1;
- (id)currentWrapPointGenerator;
- (struct __CFString *)uriForBundleResource:(struct __CFString *)arg1 ofType:(struct __CFString *)arg2;
- (void)clearWrapPoints;
- (vector_dadce35e *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (const set_3d57cb01 *)wrapPoints;
- (void)addWrapPoint:(id)arg1;
- (void)setThumbnailGenerationDone:(_Bool)arg1;
- (_Bool)isThumbnailGenerationDone;
- (void)setGeneratingThumbnail:(_Bool)arg1;
- (_Bool)isGeneratingThumbnail;
- (void)setGeneratorBeginWasCalled;
- (_Bool)generatorBeginWasCalled;
- (void)setDoExternalTextWrap:(_Bool)arg1;
- (_Bool)doExternalTextWrap;
- (void)setShouldStreamTables:(_Bool)arg1;
- (_Bool)shouldStreamTables;
- (void)setMustRegisterDrawables:(_Bool)arg1;
- (_Bool)mustRegisterDrawables;
- (void)setCurrentTableGenerator:(Class)arg1;
- (Class)currentTableGenerator;
- (void)setCurrentDrawablesGenerator:(Class)arg1;
- (Class)currentDrawablesGenerator;
- (void)setGeneratorState:(id)arg1;
- (id)generatorState;
- (void)setTableState:(id)arg1;
- (id)tableState;
- (int)objectStackDepth;
- (void)pushObject:(id)arg1;
- (id)popRetainedObject;
- (id)topObjectOfClass:(Class)arg1;
- (id)peekObject;
- (id)outputBundle;
- (struct __CFURL *)createUriToDocumentBundleResource:(struct __CFString *)arg1;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 skipCachingPDFAndNoExtentionResources:(_Bool *)arg3;
- (id)root;
- (id)processor;
- (void)dealloc;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4 fileURL:(struct __CFURL *)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(struct __CFURL *)arg3 archive:(id)arg4 outputBundle:(id)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3 fileURL:(struct __CFURL *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

