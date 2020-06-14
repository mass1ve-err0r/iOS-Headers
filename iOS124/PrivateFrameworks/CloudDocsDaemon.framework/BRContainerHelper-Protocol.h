//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/NSObject-Protocol.h>

@class BRContainer, NSDictionary, NSString, NSURL;

@protocol BRContainerHelper <NSObject>
- (NSString *)itemIDForURL:(NSURL *)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(NSURL *)arg1 toNewParent:(NSURL *)arg2 error:(id *)arg3;
- (BRContainer *)fetchContainerForURL:(NSURL *)arg1;
- (NSDictionary *)fetchAllContainersByIDWithError:(id *)arg1;
- (_Bool)canFetchAllContainersByID;
@end

