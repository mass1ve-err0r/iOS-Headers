//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest-Protocol.h>

@class NSManagedObject, PLPhotoLibrary;

@protocol PHDeleteChangeRequest <PHChangeRequest>
- (void)deleteManagedObject:(NSManagedObject *)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (_Bool)validateForDeleteManagedObject:(NSManagedObject *)arg1 error:(id *)arg2;
@end

