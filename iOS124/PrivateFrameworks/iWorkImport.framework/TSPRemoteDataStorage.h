//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSMutableArray, NSObject, NSURL, SFUCryptoKey, TSPTemporaryDataStorageURL;
@protocol OS_dispatch_queue, TSPCryptoInfo, TSPRemoteDataStorageDelegate;

__attribute__((visibility("hidden")))
@interface TSPRemoteDataStorage : TSPFileDataStorage
{
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPTemporaryDataStorageURL *_temporaryMaterializedURL;
    id <TSPCryptoInfo> _temporaryDecryptionInfo;
    NSObject<OS_dispatch_queue> *_downloadObserverInfosQueue;
    NSMutableArray *_downloadObserverInfos;
    _Bool _canDownload;
    id <TSPRemoteDataStorageDelegate> _delegate;
    NSURL *_remoteURL;
    long long _downloadPriority;
}

+ (id)ioQueue;
@property(readonly, nonatomic) long long downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(readonly, nonatomic) _Bool canDownload; // @synthesize canDownload=_canDownload;
@property(readonly, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(nonatomic) __weak id <TSPRemoteDataStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDownloadObserversWithStatusImpl:(long long)arg1 info:(id)arg2;
- (void)notifyDownloadObserversWithStatus:(long long)arg1 info:(id)arg2;
- (void)addDownloadObserver:(id)arg1 forData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)needsDownload;
- (id)decryptionInfo;
- (unsigned long long)length;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(id)arg4;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)didReceiveRemoteDataWithReadChannel:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didReceiveRemoteDataAtURL:(id)arg1 canMove:(_Bool)arg2 decryptionInfo:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)didReceiveRemoteData:(id)arg1 decryptionInfo:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didReceiveRemoteDataWithDecryptionInfo:(id)arg1 noEncryptionHandler:(CDUnknownBlockType)arg2 createReadChannelForCryptoTranscodeBlock:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)temporaryMaterializedURL;
@property(readonly, nonatomic) _Bool isMaterialized;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteURL:(id)arg1 encryptionKey:(id)arg2 canDownload:(_Bool)arg3 downloadPriority:(long long)arg4;

@end

