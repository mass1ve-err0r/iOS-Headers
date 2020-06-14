//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSString, SFUBufferedInputStream;
@protocol SFUInputStream;

@protocol SFUInputBundle <NSObject>
- (void)copyEntry:(NSString *)arg1 toFile:(NSString *)arg2;
- (unsigned int)crc32ForEntry:(NSString *)arg1;
- (long long)lengthOfEntry:(NSString *)arg1;
- (SFUBufferedInputStream *)bufferedInputStreamForEntry:(NSString *)arg1;
- (id <SFUInputStream>)inputStreamForEntry:(NSString *)arg1;
- (_Bool)hasEntryWithName:(NSString *)arg1;
@end

