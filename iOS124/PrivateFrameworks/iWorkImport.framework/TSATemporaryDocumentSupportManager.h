//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUTemporaryDirectoryManager.h>

__attribute__((visibility("hidden")))
@interface TSATemporaryDocumentSupportManager : TSUTemporaryDirectoryManager
{
}

+ (id)sharedManager;
+ (Class)managedTemporaryDirectoryClass;
+ (id)baseDirectoryURL;
- (id)newDirectoryForDocumentUUID:(id)arg1;

@end

