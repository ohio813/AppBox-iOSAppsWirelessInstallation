///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGViewerInfoPolicy;

#pragma mark - API Object

///
/// The `ViewerInfoPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGViewerInfoPolicy : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGViewerInfoPolicyTag` enum type represents the possible tag
/// states with which the `DBSHARINGViewerInfoPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGViewerInfoPolicyTag) {
  /// Viewer information is available on this file.
  DBSHARINGViewerInfoPolicyEnabled,

  /// Viewer information is disabled on this file.
  DBSHARINGViewerInfoPolicyDisabled,

  /// (no description).
  DBSHARINGViewerInfoPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGViewerInfoPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "enabled".
///
/// Description of the "enabled" tag state: Viewer information is available on
/// this file.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithEnabled;

///
/// Initializes union class with tag state of "disabled".
///
/// Description of the "disabled" tag state: Viewer information is disabled on
/// this file.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "enabled".
///
/// @return Whether the union's current tag state has value "enabled".
///
- (BOOL)isEnabled;

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

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
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGViewerInfoPolicy` union.
///
@interface DBSHARINGViewerInfoPolicySerializer : NSObject

///
/// Serializes `DBSHARINGViewerInfoPolicy` instances.
///
/// @param instance An instance of the `DBSHARINGViewerInfoPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGViewerInfoPolicy` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGViewerInfoPolicy * _Nonnull)instance;

///
/// Deserializes `DBSHARINGViewerInfoPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGViewerInfoPolicy` API object.
///
/// @return An instantiation of the `DBSHARINGViewerInfoPolicy` object.
///
+ (DBSHARINGViewerInfoPolicy * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
