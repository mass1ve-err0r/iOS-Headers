//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TSPCryptoInfo;

__attribute__((visibility("hidden")))
@interface TSPDataStorageWriteResult : NSObject
{
    _Bool _didCopyDataToPackage;
    _Bool _isMissingData;
    NSString *_filename;
    id <TSPCryptoInfo> _encryptionInfo;
}

@property(readonly, nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;
@property(readonly, nonatomic) _Bool didCopyDataToPackage; // @synthesize didCopyDataToPackage=_didCopyDataToPackage;
@property(readonly, nonatomic) id <TSPCryptoInfo> encryptionInfo; // @synthesize encryptionInfo=_encryptionInfo;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2 didCopyDataToPackage:(_Bool)arg3 isMissingData:(_Bool)arg4;

@end

