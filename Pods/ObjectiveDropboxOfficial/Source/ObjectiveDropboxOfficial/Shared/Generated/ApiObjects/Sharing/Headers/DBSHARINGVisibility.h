///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGVisibility;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `Visibility` union.
///
/// Who can access a shared link. The most open visibility is public. The
/// default depends on many aspects, such as team and user preferences and
/// shared folder settings.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGVisibility : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGVisibilityTag` enum type represents the possible tag states
/// with which the `DBSHARINGVisibility` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGVisibilityTag) {
  /// Anyone who has received the link can access it. No login required.
  DBSHARINGVisibilityPublic,

  /// Only members of the same team can access the link. Login is required.
  DBSHARINGVisibilityTeamOnly,

  /// A link-specific password is required to access the link. Login is not
  /// required.
  DBSHARINGVisibilityPassword,

  /// Only members of the same team who have the link-specific password can
  /// access the link.
  DBSHARINGVisibilityTeamAndPassword,

  /// Only members of the shared folder containing the linked file can access
  /// the link. Login is required.
  DBSHARINGVisibilitySharedFolderOnly,

  /// (no description).
  DBSHARINGVisibilityOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGVisibilityTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "public".
///
/// Description of the "public" tag state: Anyone who has received the link can
/// access it. No login required.
///
/// @return An initialized instance.
///
- (instancetype)initWithPublic;

///
/// Initializes union class with tag state of "team_only".
///
/// Description of the "team_only" tag state: Only members of the same team can
/// access the link. Login is required.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamOnly;

///
/// Initializes union class with tag state of "password".
///
/// Description of the "password" tag state: A link-specific password is
/// required to access the link. Login is not required.
///
/// @return An initialized instance.
///
- (instancetype)initWithPassword;

///
/// Initializes union class with tag state of "team_and_password".
///
/// Description of the "team_and_password" tag state: Only members of the same
/// team who have the link-specific password can access the link.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamAndPassword;

///
/// Initializes union class with tag state of "shared_folder_only".
///
/// Description of the "shared_folder_only" tag state: Only members of the
/// shared folder containing the linked file can access the link. Login is
/// required.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderOnly;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "public".
///
/// @return Whether the union's current tag state has value "public".
///
- (BOOL)isPublic;

///
/// Retrieves whether the union's current tag state has value "team_only".
///
/// @return Whether the union's current tag state has value "team_only".
///
- (BOOL)isTeamOnly;

///
/// Retrieves whether the union's current tag state has value "password".
///
/// @return Whether the union's current tag state has value "password".
///
- (BOOL)isPassword;

///
/// Retrieves whether the union's current tag state has value
/// "team_and_password".
///
/// @return Whether the union's current tag state has value "team_and_password".
///
- (BOOL)isTeamAndPassword;

///
/// Retrieves whether the union's current tag state has value
/// "shared_folder_only".
///
/// @return Whether the union's current tag state has value
/// "shared_folder_only".
///
- (BOOL)isSharedFolderOnly;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGVisibility` union.
///
@interface DBSHARINGVisibilitySerializer : NSObject

///
/// Serializes `DBSHARINGVisibility` instances.
///
/// @param instance An instance of the `DBSHARINGVisibility` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGVisibility` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGVisibility *)instance;

///
/// Deserializes `DBSHARINGVisibility` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGVisibility` API object.
///
/// @return An instantiation of the `DBSHARINGVisibility` object.
///
+ (DBSHARINGVisibility *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
