//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSItemProvider, NSURLSessionTask, VSAuditToken, VSOptional;

@interface VSImageLoadOperation : VSAsyncOperation
{
    NSItemProvider *_itemProvider;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSURLSessionTask *_task;
    struct CGSize _preferredImageSize;
}

@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(readonly, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_beginFetchingDataFromURL:(id)arg1;
- (void)_finishWithImageData:(id)arg1 orError:(id)arg2;
- (id)initWithItemProvider:(id)arg1 preferredImageSize:(struct CGSize)arg2;
- (id)init;

@end

