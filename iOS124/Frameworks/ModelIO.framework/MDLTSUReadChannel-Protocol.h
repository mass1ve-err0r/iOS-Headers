//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLTSUIOChannel-Protocol.h>
#import <ModelIO/MDLTSUStreamReadChannel-Protocol.h>

@protocol MDLTSUReadChannel <MDLTSUIOChannel, MDLTSUStreamReadChannel>
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

