//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVErrorResolver, NSError;

@protocol MPAVErrorResolverDelegate <NSObject>

@optional
- (void)errorResolver:(MPAVErrorResolver *)arg1 didResolveError:(NSError *)arg2 withResolution:(long long)arg3;
@end

