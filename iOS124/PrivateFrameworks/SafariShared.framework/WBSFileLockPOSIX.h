//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFileLock-Protocol.h>

@interface WBSFileLockPOSIX : NSObject <WBSFileLock>
{
    int _fileDescriptor;
}

- (void)dealloc;
- (void)releaseLock;
- (id)initWithFileDescriptor:(int)arg1;

@end

