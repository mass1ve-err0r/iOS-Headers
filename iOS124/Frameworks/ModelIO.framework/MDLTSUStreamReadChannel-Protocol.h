//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/NSObject-Protocol.h>

@protocol MDLTSUStreamReadChannel <NSObject>
- (void)close;
- (void)readWithHandler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg1;
@end

