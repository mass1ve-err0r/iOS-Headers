//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/NSObject-Protocol.h>

@class TVPSecureKeyStandardLoader;

@protocol TVPSecureKeyStandardLoaderConnectionHandling <NSObject>
- (void)secureKeyStandardLoader:(TVPSecureKeyStandardLoader *)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(void (^)(NSData *, NSURLResponse *, NSError *))arg3;
@end

