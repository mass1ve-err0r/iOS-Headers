//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSString;
@protocol FCContentContext, FCFlintHelper;

@interface FCOfflineIssueFetchOperation : FCOperation
{
    _Bool _cachedOnly;
    double _progress;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
    NSString *_issueID;
    id _resultHoldToken;
}

@property(retain, nonatomic) id resultHoldToken; // @synthesize resultHoldToken=_resultHoldToken;
@property(copy, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property(retain, nonatomic) id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
- (void).cxx_destruct;
- (id)_pdfArchiveURLForIssue:(id)arg1;
- (void)_updateProgress:(double)arg1;
- (id)_resourceIDsFromMetadataJSONData:(id)arg1;
- (id)_promisePDFPagesForIssue:(id)arg1;
- (id)_promiseANFArticlesForIssue:(id)arg1;
- (id)_promiseCoverImageForIssue:(id)arg1;
- (id)_promiseMetadataForIssue:(id)arg1;
- (id)_promiseIssue;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issue:(id)arg3;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 issueID:(id)arg3;
- (id)init;

@end

