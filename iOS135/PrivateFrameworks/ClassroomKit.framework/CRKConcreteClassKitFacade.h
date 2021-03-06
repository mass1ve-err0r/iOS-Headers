/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKConcreteClassKitFacade : NSObject <CRKClassKitFacade> {
    CRKClassKitAccountEligibilityProvider * _accountEligibilityProvider;
}

@property (nonatomic, readonly) CRKClassKitAccountEligibilityProvider *accountEligibilityProvider;
@property (nonatomic, readonly, copy) NSString *currentUserDidChangeNotificationName;
@property (nonatomic, readonly, copy) NSString *currentUserInfoKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEligibleAccountSignedIn, nonatomic, readonly) bool eligibleAccountSignedIn;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *studentClassMembershipChangeDarwinNotificationName;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingEligibleAccountSignedIn;
+ (id)makePersonSortDescriptorsSortingGivenNameFirst:(bool)arg1;

- (void).cxx_destruct;
- (id)accountEligibilityProvider;
- (void)addInstructor:(id)arg1 toClass:(id)arg2;
- (void)addPerson:(id)arg1 withRole:(unsigned long long)arg2 toClass:(id)arg3;
- (void)addStudent:(id)arg1 toClass:(id)arg2;
- (id)classDataObserverWithSortDescriptors:(id)arg1;
- (id)currentUserDataObserverWithSortDescriptors:(id)arg1;
- (id)currentUserDidChangeNotificationName;
- (id)currentUserInfoKey;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (id)dataStore;
- (void)deregisterDataObserver:(id)arg1;
- (void)enrolledClassesWithCompletion:(id /* block */)arg1;
- (void)executeQuery:(id)arg1;
- (id)init;
- (void)instructedClassesWithCompletion:(id /* block */)arg1;
- (id)instructorObserverWithSortDescriptors:(id)arg1;
- (void)instructorsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (bool)isEligibleAccountSignedIn;
- (id)locationsObserverWithSortDescriptors:(id)arg1;
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)locationsWithObjectIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)makeClassWithLocationID:(id)arg1 name:(id)arg2;
- (id)makeInstructorQueryForSearchString:(id)arg1 sortingGivenNameFirst:(bool)arg2 pageSize:(long long)arg3;
- (id)makePredicateForObjectIDs:(id)arg1;
- (id)makePredicatesForObjectIDs:(id)arg1;
- (id)makeQueryForPersonsWithRole:(long long)arg1 searchString:(id)arg2 sortingGivenNameFirst:(bool)arg3 pageSize:(long long)arg4;
- (id)makeStudentQueryForSearchString:(id)arg1 sortingGivenNameFirst:(bool)arg2 pageSize:(long long)arg3;
- (id)objectIDsOfInstructorsInClass:(id)arg1;
- (id)objectIDsOfMembersInClass:(id)arg1 withRole:(unsigned long long)arg2;
- (id)objectIDsOfStudentsInClass:(id)arg1;
- (void)registerDataObserver:(id)arg1;
- (void)removeClass:(id)arg1 completion:(id /* block */)arg2;
- (void)removeInstructor:(id)arg1 fromClass:(id)arg2;
- (void)removePerson:(id)arg1 withRole:(unsigned long long)arg2 fromClass:(id)arg3;
- (void)removeStudent:(id)arg1 fromClass:(id)arg2;
- (void)saveClass:(id)arg1 completion:(id /* block */)arg2;
- (id)studentClassMembershipChangeDarwinNotificationName;
- (id)studentObserverWithSortDescriptors:(id)arg1;
- (void)studentsInClassWithObjectID:(id)arg1 completion:(id /* block */)arg2;

@end
