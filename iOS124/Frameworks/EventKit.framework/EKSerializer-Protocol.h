//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class EKEvent, NSData, NSString;

@protocol EKSerializer
- (NSString *)version;
- (NSString *)versionFromData:(NSData *)arg1 error:(id *)arg2;
- (EKEvent *)deserializeData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)serializeEvent:(EKEvent *)arg1 error:(id *)arg2;
@end

