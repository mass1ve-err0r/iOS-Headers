//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUZipOutputEntry : NSObject
{
    NSString *name;
    unsigned long long utf8NameLength;
    _Bool isCompressed;
    _Bool isEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    _Bool isWrittenDirectlyToFile;
    _Bool is64Bit;
}

- (long long)compareByOffset:(id)arg1;
- (id)description;
- (void)dealloc;

@end

