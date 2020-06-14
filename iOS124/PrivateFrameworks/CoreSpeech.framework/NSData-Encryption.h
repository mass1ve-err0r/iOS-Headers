//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (Encryption)
+ (id)decryptedDataUsingAESKey:(id)arg1 atFilepath:(id)arg2 error:(id *)arg3;
+ (id)randomBytesWithLength:(unsigned long long)arg1 error:(id *)arg2;
+ (id)errorMessageForCCErrorCode:(long long)arg1;
- (id)decryptedDataWithAESGCMKey:(id)arg1 ivData:(id)arg2 tagData:(id)arg3 error:(id *)arg4;
- (void)encryptedDataWithAESGCMKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)saveEncryptedDataUsingAESKey:(id)arg1 atFilepath:(id)arg2;
@end

