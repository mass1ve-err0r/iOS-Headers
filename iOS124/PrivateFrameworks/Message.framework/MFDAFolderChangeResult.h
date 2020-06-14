//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject
{
    NSError *_error;
    NSString *_folderID;
    NSString *_folderName;
    long long _statusCode;
}

@property(readonly) NSString *folderName; // @synthesize folderName=_folderName;
@property(readonly) NSString *folderID; // @synthesize folderID=_folderID;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (id)description;
- (_Bool)wasSuccessful;
- (void)dealloc;
- (id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4;

@end

