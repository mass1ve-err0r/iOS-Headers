//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSString, TSPDirectoryPackage;
@protocol TSPCryptoInfo;

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage
{
    _Atomic unsigned long long _cachedEncodedLength;
    NSString *_path;
    id <TSPCryptoInfo> _decryptionInfo;
    unsigned char _packageIdentifier;
    _Bool _isMissingData;
    _Bool _gilligan_isRemote;
    TSPDirectoryPackage *_package;
}

@property(readonly, nonatomic) __weak TSPDirectoryPackage *package; // @synthesize package=_package;
- (void)setGilligan_isRemote:(_Bool)arg1;
- (_Bool)gilligan_isRemote;
- (void).cxx_destruct;
- (_Bool)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(_Bool)arg3;
- (_Bool)isInPackage:(id)arg1;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(id)arg4;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)setIsMissingData:(_Bool)arg1;
- (_Bool)isMissingData;
- (id)decryptionInfo;
- (unsigned long long)encodedLength;
- (unsigned long long)length;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;

@end

