//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>

@class NSString;

@interface ASDLogFileOptions : NSObject <NSCopying>
{
    NSString *_directoryPath;
    NSString *_fileName;
    unsigned long long _maxSizeInBytes;
    long long _maxNumberOfLogFiles;
}

@property(nonatomic) long long maxNumberOfLogFiles; // @synthesize maxNumberOfLogFiles=_maxNumberOfLogFiles;
@property(nonatomic) unsigned long long maxLogFileSize; // @synthesize maxLogFileSize=_maxSizeInBytes;
@property(copy, nonatomic) NSString *logFileBaseName; // @synthesize logFileBaseName=_fileName;
@property(copy, nonatomic) NSString *logDirectoryPath; // @synthesize logDirectoryPath=_directoryPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

