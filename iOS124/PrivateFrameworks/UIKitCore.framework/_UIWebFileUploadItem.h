//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIWebFileUploadItem : NSObject
{
    NSString *_filePath;
}

@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (_Bool)isVideo;
- (id)displayImage;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end

