//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSPDataManager, TSPObjectContext;
@protocol OS_dispatch_queue, TSPDataStorage;

@interface TSPData : NSObject
{
    int _didCull;
    long long _identifier;
    NSObject<OS_dispatch_queue> *_accessQueue;
    id <TSPDataStorage> _storage;
    NSString *_filename;
    TSPDataManager *_manager;
    array_019f9a10 _digest;
    _Bool _isDeallocating;
}

+ (_Bool)updateDigest:(array_019f9a10 *)arg1 withProtobufString:(const basic_string_a1f69cfb *)arg2;
+ (id)requiredAVAssetOptions;
+ (id)cullingListeners;
+ (void)removeCullingListener:(id)arg1;
+ (void)addCullingListener:(id)arg1;
+ (id)cullingListenersQueue;
+ (id)null;
+ (id)readOnlyDataWithoutDataDigestFromURL:(id)arg1 context:(id)arg2;
+ (id)readOnlyDataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)readOnlyDataFromURL:(id)arg1 context:(id)arg2;
+ (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromDataRep:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromNSData:(id)arg1 filename:(id)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 useFileCoordination:(_Bool)arg3 context:(id)arg4;
+ (id)dataFromURL:(id)arg1 useExternalReferenceIfAllowed:(_Bool)arg2 context:(id)arg3;
+ (id)dataFromURL:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isStorageInPackage:(id)arg1;
- (const array_019f9a10 *)digest;
- (id)preferredFilename;
- (void)setFilename:(id)arg1 storage:(id)arg2;
@property(retain, nonatomic) id <TSPDataStorage> storage;
- (id)initWithIdentifier:(long long)arg1 digest:(const array_019f9a10 *)arg2 filename:(id)arg3 storage:(id)arg4 manager:(id)arg5;
@property(readonly, nonatomic) unsigned long long encodedLength;
- (_Bool)isLengthLikelyToBeGreaterThan:(unsigned long long)arg1;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addDownloadObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)performInputStreamReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
@property(readonly, nonatomic) TSPObjectContext *context;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
@property(readonly, nonatomic) _Bool isExternalData;
@property(readonly, nonatomic) _Bool isApplicationData;
@property(readonly, nonatomic) _Bool isReadable;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *filename;
- (id)AVAssetWithOptions:(id)arg1;
- (id)AVAsset;
- (struct CGImage *)newCGImage;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;
- (id)NSData;
- (id)bookmarkData;
- (void)willCull;
- (void)dealloc;

@end

