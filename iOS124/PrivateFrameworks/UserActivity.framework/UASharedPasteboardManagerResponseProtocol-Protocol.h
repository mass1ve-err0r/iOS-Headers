//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSFileHandle;

@protocol UASharedPasteboardManagerResponseProtocol <NSObject>
- (void)tellClientDebuggingEnabled:(_Bool)arg1 logFileHandle:(NSFileHandle *)arg2;
- (void)writeLocalPasteboardToFile:(NSFileHandle *)arg1 withCompletion:(void (^)(UASharedPasteboardInfo *, NSError *))arg2;
@end

