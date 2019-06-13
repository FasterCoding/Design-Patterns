from user.User import User
from user.UserBuilder import UserBuilder

user = UserBuilder.item().withFirstName("Dave").withLastName("Johnson").withAge(55).liveInStreet("Example Street 123").build()

user.print()